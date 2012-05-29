<?php
/**
 * Available variables:
 * $name - Name as entered
 * $last_name - Last name as entered
 * $email - E-mail adress as entered
 * $filename - Filename from the webform node
 * $fileurl - Absolut URL to the file
 * $node - Full node of the webform node
 */
?>
<div>
<p>Registered: <?=$name?> <?=$last_name?><br/>
E-mail: <?=$email?></p>

Fil: <a href=<?=$fileurl?> alt="Download fil"><?=$filename?></a>
