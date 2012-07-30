function init(name, meeting_id, bullet_point_id, bilag_id, ip_address, port_nr) {
	jQuery(document).ready(function() {
		"use strict";
		jQuery('#content').annotator().annotator('addPlugin', 'Touch', {
			force: location.search.indexOf('force') > -1,
			useHighlighter: location.search.indexOf('highlighter') > -1
		});
		//jQuery('#content').annotator().annotator('addPlugin', 'Tags');
		jQuery('#content').annotator().annotator('addPlugin', 'Filter');
	
		jQuery('#content').annotator().annotator('addPlugin', 'Store', {
			// The endpoint of the store on your server.
			prefix: 'http://'+ip_address+':'+port_nr,
			annotationData: {
				'drupal_user': name,
				'bilag_id': bilag_id,
				'bullet_point_id': bullet_point_id,
				'meeting_id': meeting_id
			},
			loadFromSearch: {
				'drupal_user': name,
				'bilag_id': bilag_id,
				'bullet_point_id': bullet_point_id,
				'meeting_id': meeting_id
			}
		});
	});
}