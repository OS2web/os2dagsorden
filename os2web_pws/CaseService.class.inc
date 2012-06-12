<?php

/*
 *
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */

/**
 * Abstract interface for a service that return ESDH documents
 *
 * @author jm
 */
abstract class CaseService {

  /**
   * Must return an array of document ids related to a given case.
   *
   * Input should be string with a case identifier
   */
  abstract public function fetchCase($id);

  /**
   * Must return an array with information regarding a given document.
   *
   * Input should be a case identifier, obtainable from fetchCase()
   */
  abstract public function fetchDoc($id);
}

?>
