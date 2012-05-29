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
<h2>Tak for din registrering!</h2>

<p>Dine registrerede informaiton er:</p>
<ul>
<li>
Fulde navn: <?=$name?> <?=$last_name?></li>
<li>E-mail: <?=$email?></li>
</ul>

<p>De ønskede filer kan downloades her:</p>
<?=$files?>
<ul>
<?php foreach ($files as $file):?>
<li><?=$file?></li>
<?php endforeach;?>
</ul>
