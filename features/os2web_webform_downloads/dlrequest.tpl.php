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

<p>Den ønskede fil kan downloades her:</p>
<a href=<?=$fileurl?> alt="Download fil"><?=$filename?></a>
