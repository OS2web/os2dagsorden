<?php
/**
 * Available variables:
 * $name - Name as entered
 * $last_name - Last name as entered
 * $email - E-mail adress as entered
 * $files - Rendered field with file attachments
 * $node - Full node of the webform node
 */
?>
<h2>Tak for din registrering!</h2>

<p>Dine registrerede informaiton er:</p>
<ul>
<li>Virksomhed: <?=$company?></li>
<li>Fulde navn: <?=$name?></li>
<li>E-mail: <?=$email?></li>
</ul>

<p>De ønskede filer kan downloades her:</p>
<?=$files?>
