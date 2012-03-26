<?php

// $Id$
/*
 * 
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */
module_load_include('inc', 'os2web_pws', 'AcadrePWS.class');

class AcadrePWSMock extends AcadrePWS {

  /**
   * Initial service setup.
   */
  function __construct() {
    try {
      parent::__construct();
    } catch (Exception $exc) {

    }
  }

  /**
   * Looks up a journaling entry and returns the id of a case.
   *
   * @param string $query A case journaling number, ie. 11/14293
   */
  public function lookupCase($query) {
    switch ($query) {
      case '11/14293':
        return 349566;
      case '11/4949':
        return 340222;
      default:
        return parent::lookupCase($query);
    }
  }

  public function fetchCase($id) {
    switch ($id) {
      case 349566:
        return (object) array(
                'CaseFileIdentifier' => 349566,
                'Year' => 2011,
                'CaseFileSequenceNumber' => 14293,
                'CreationDate' => '2011-05-10',
                'CaseFileTitleText' => 'test',
                'TitleUnofficialIndicator' => false,
                'TitleAlternativeText' => '',
                'CaseFileManagerReference' => 642,
                'RestrictedFromPublicText' => '3',
                'RetentionTimeYear' => 2011,
                'DisposalDate' => '2011-11-29',
                'CaseFileLoanDate' => '0001-01-01',
                'CaseFileNumberIdentifier' => '11/14293',
                'CaseFileLatestUpdateDate' => '2011-11-29',
                'CaseFileStatusCode' => 'A',
                'CaseFileTypeCode' => 'EMSAG',
                'CaseFileDisposalCode' => 'K',
                'CustomFields' =>
                (object) array(
                    'df1' => 'test',
                    'df2' => '',
                    'df3' => '',
                    'df4' => '',
                    'df5' => '',
                    'df6' => '',
                    'df7' => '',
                    'df8' => '',
                    'df9' => '',
                    'df10' => '',
                    'df11' => '',
                    'df12' => '',
                    'df13' => '',
                    'df14' => '10-05-2011',
                    'df15' => '10-05-2011',
                    'df16' => '10-05-2011',
                    'df17' => '10-05-2011',
                    'df18' => '10-05-2011',
                    'df19' => '',
                    'df20' => '',
                    'df21' => '',
                    'df22' => '',
                    'df23' => '',
                    'df24' => '',
                    'df25' => '',
                ),
                'AccessCode' => 'KK',
                'AdministrativeUnit' =>
                (object) array(
                    'AdministrativeUnitReference' => 121,
                ),
                'Classification' =>
                (object) array(
                    'Keyword' => '',
                    'Category' =>
                    array(
                        0 =>
                        (object) array(
                            'Principle' => 'Facetter',
                            'Literal' => 'P19',
                        ),
                        1 =>
                        (object) array(
                            'Principle' => 'KL Koder',
                            'Literal' => '01.03.00',
                        ),
                    ),
                ),
        );
      case 340222:
        return (object) array(
                'CaseFileIdentifier' => 340222,
                'Year' => 2011,
                'CaseFileSequenceNumber' => 4949,
                'CreationDate' => '2011-02-11',
                'CaseFileTitleText' => 'Test af doc2mail',
                'TitleUnofficialIndicator' => false,
                'TitleAlternativeText' => '',
                'CaseFileManagerReference' => 171,
                'RestrictedFromPublicText' => '3',
                'RetentionTimeYear' => 2016,
                'DisposalDate' => '2016-12-13',
                'CaseFileLoanDate' => '0001-01-01',
                'CaseFileNumberIdentifier' => '11/4949',
                'CaseFileLatestUpdateDate' => '2011-12-13',
                'CaseFileStatusCode' => 'A',
                'CaseFileTypeCode' => 'EMSAG',
                'CaseFileDisposalCode' => 'K5',
                'CustomFields' =>
                (object) array(
                    'df1' => 'TEST af doc2mail',
                    'df2' => '',
                    'df3' => '',
                    'df4' => '',
                    'df5' => '',
                    'df6' => '',
                    'df7' => '',
                    'df8' => '',
                    'df9' => '',
                    'df10' => '',
                    'df11' => '',
                    'df12' => '',
                    'df13' => '',
                    'df14' => '11-02-2011',
                    'df15' => '11-02-2011',
                    'df16' => '11-02-2011',
                    'df17' => '11-02-2011',
                    'df18' => '11-02-2011',
                    'df19' => '',
                    'df20' => '',
                    'df21' => '',
                    'df22' => '',
                    'df23' => '',
                    'df24' => '',
                    'df25' => '56ae8856-c5e4-4617-8c42-e4bbad4149e8',
                ),
                'AccessCode' => 'KK',
                'AdministrativeUnit' =>
                (object) array(
                    'AdministrativeUnitReference' => 76,
                ),
                'Classification' =>
                (object) array(
                    'Keyword' => '',
                    'Category' =>
                    array(
                        0 =>
                        (object) array(
                            'Principle' => 'Facetter',
                            'Literal' => 'A00',
                        ),
                        1 =>
                        (object) array(
                            'Principle' => 'KL Koder',
                            'Literal' => '17.00.00',
                        ),
                    ),
                ),
                'Party' =>
                array(
                    0 =>
                    (object) array(
                        'ContactReference' => 'cb95f0c5-d006-400b-b2ca-0176bd8b2ed7',
                        'ContactVersionReference' => 3,
                        'CreatorReference' => 171,
                        'CreationDate' => '2011-03-08',
                        'PublicAccessLevelReference' => 1,
                        'PartyComment' => '',
                    ),
                    1 =>
                    (object) array(
                        'ContactReference' => '8552fa28-97d0-46a4-bbc7-625d4567e60c',
                        'ContactVersionReference' => 3,
                        'CreatorReference' => 171,
                        'CreationDate' => '2011-03-08',
                        'PublicAccessLevelReference' => 1,
                        'PartyComment' => '',
                    ),
                    2 =>
                    (object) array(
                        'ContactReference' => '56ae8856-c5e4-4617-8c42-e4bbad4149e8',
                        'ContactVersionReference' => 1,
                        'CreatorReference' => 171,
                        'CreationDate' => '2011-03-08',
                        'PublicAccessLevelReference' => 1,
                        'PartyComment' => '',
                    ),
                ),
        );
      default:
        return parent::fetchCase($id);
    }
  }

}