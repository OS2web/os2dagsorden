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
    drupal_get_messages('error');
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

  public function lookupDoc($query) {
    switch ($query) {
      case '79339/11':
        return 1420175;
      default:
        return parent::lookupDoc($query);
    }
  }

  public function getDocument($id) {
    switch ($id) {
      case '1420175':
        return array(
            0 =>
            (object) array(
                'DocumentIdentifier' => '1420175',
                'DocumentCategoryCode' => 'Besvarelse',
                'DocumentTitleText' => 'Test vedr 2 underskrifter',
                'DocumentPaperStorageIndicator' => 'false',
                'DocumentStatusCode' => 'B',
            ),
            1 =>
            (object) array(
                'DocumentLinkTypeCode' => 'H',
                'RecordReference' => '1420178',
                'DocumentReference' => '1420175',
                'LinkDate' => '2011-04-28',
            ),
            2 =>
            (object) array(
                'DocumentVersionIdentifier' => '1',
                'DocumentReference' => '1420175',
                'DocumentFileReference' => '3081831',
                'VersionNumber' => '1',
                'ActiveIndicator' => 'true',
                'RegisteringOfficerReference' => '1017',
                'VariantTypeCode' => 'P',
            ),
            3 =>
            (object) array(
                'RecordIdentifier' => '1420178',
                'CreationYear' => '2011',
                'RecordSerialNumber' => '4',
                'CaseFileReference' => '340222',
                'RecordSequenceNumber' => '79339',
                'RegistrationDate' => '2011-04-28',
                'DocumentDate' => '2011-04-28',
                'DocumentDateUnknownIndicator' => 'false',
                'DescriptionText' => 'Test vedr 2 underskrifter',
                'AlternativeDescriptionText' =>
                (object) array(
                ),
                'PublicationIndicator' => '3',
                'RecordPaperStorageIndicator' => 'false',
                'RecordLatestUpdateDate' => '2011-04-28',
                'CaseFileManagerReference' => '1017',
                'DocumentTypeCode' => 'U',
                'RecordStatusCode' => 'R',
                'AccessCode' => 'KK',
            ),
        );
      default:
        return parent::getDocument($id);
    }
  }

  public function getCaseDocs($id) {
    switch ($id) {
      case 340222:
        return array(
            0 =>
            (object) array(
                'Document' =>
                (object) array(
                    'DocumentIdentifier' => '1369822',
                    'DocumentCategoryCode' => 'Henvend',
                    'DocumentTitleText' => 'Test1',
                    'DocumentPaperStorageIndicator' => 'false',
                    'DocumentStatusCode' => 'B',
                ),
                'DocumentLink' =>
                (object) array(
                    'DocumentLinkTypeCode' => 'H',
                    'RecordReference' => '1369826',
                    'DocumentReference' => '1369822',
                    'LinkDate' => '2011-02-11',
                ),
                'DocumentVersion' =>
                (object) array(
                    'DocumentVersionIdentifier' => '1',
                    'DocumentReference' => '1369822',
                    'DocumentFileReference' => '3023484',
                    'VersionNumber' => '1',
                    'ActiveIndicator' => 'true',
                    'RegisteringOfficerReference' => '171',
                    'VariantTypeCode' => 'P',
                ),
                'Record' =>
                (object) array(
                    'RecordIdentifier' => '1369826',
                    'CreationYear' => '2011',
                    'RecordSerialNumber' => '1',
                    'CaseFileReference' => '340222',
                    'RecordSequenceNumber' => '28995',
                    'RegistrationDate' => '2011-02-11',
                    'DocumentDate' => '2011-02-11',
                    'DocumentDateUnknownIndicator' => 'false',
                    'DescriptionText' => 'Test1',
                    'AlternativeDescriptionText' =>
                    (object) array(
                    ),
                    'PublicationIndicator' => '3',
                    'RecordPaperStorageIndicator' => 'false',
                    'RecordLatestUpdateDate' => '2011-08-03',
                    'CaseFileManagerReference' => '171',
                    'DocumentTypeCode' => 'U',
                    'RecordStatusCode' => 'J',
                    'AccessCode' => 'KK',
                ),
            ),
            1 =>
            (object) array(
                'Document' =>
                (object) array(
                    'DocumentIdentifier' => '1386113',
                    'DocumentCategoryCode' => 'Henvend',
                    'DocumentTitleText' => 'TestF',
                    'DocumentPaperStorageIndicator' => 'false',
                    'DocumentStatusCode' => 'B',
                ),
                'DocumentLink' =>
                (object) array(
                    'DocumentLinkTypeCode' => 'H',
                    'RecordReference' => '1386117',
                    'DocumentReference' => '1386113',
                    'LinkDate' => '2011-03-08',
                ),
                'DocumentVersion' =>
                (object) array(
                    'DocumentVersionIdentifier' => '1',
                    'DocumentReference' => '1386113',
                    'DocumentFileReference' => '3042551',
                    'VersionNumber' => '1',
                    'ActiveIndicator' => 'true',
                    'RegisteringOfficerReference' => '1017',
                    'VariantTypeCode' => 'P',
                ),
                'Record' =>
                (object) array(
                    'RecordIdentifier' => '1386117',
                    'CreationYear' => '2011',
                    'RecordSerialNumber' => '2',
                    'CaseFileReference' => '340222',
                    'RecordSequenceNumber' => '45284',
                    'RegistrationDate' => '2011-03-08',
                    'DocumentDate' => '2011-03-08',
                    'DocumentDateUnknownIndicator' => 'false',
                    'DescriptionText' => 'Testskabelon til Natur og miljø',
                    'AlternativeDescriptionText' =>
                    (object) array(
                    ),
                    'PublicationIndicator' => '1',
                    'RecordPaperStorageIndicator' => 'false',
                    'RecordLatestUpdateDate' => '2011-03-08',
                    'CaseFileManagerReference' => '1017',
                    'DocumentTypeCode' => 'U',
                    'RecordStatusCode' => 'E',
                    'AccessCode' => 'KK',
                ),
            ),
            2 =>
            (object) array(
                'Document' =>
                (object) array(
                    'DocumentIdentifier' => '1386114',
                    'DocumentCategoryCode' => 'Henvend',
                    'DocumentTitleText' => 'TestF',
                    'DocumentPaperStorageIndicator' => 'false',
                    'DocumentStatusCode' => 'B',
                ),
                'DocumentLink' =>
                (object) array(
                    'DocumentLinkTypeCode' => 'H',
                    'RecordReference' => '1386118',
                    'DocumentReference' => '1386114',
                    'LinkDate' => '2011-03-08',
                ),
                'DocumentVersion' =>
                (object) array(
                    'DocumentVersionIdentifier' => '1',
                    'DocumentReference' => '1386114',
                    'DocumentFileReference' => '3042552',
                    'VersionNumber' => '1',
                    'ActiveIndicator' => 'true',
                    'RegisteringOfficerReference' => '1017',
                    'VariantTypeCode' => 'P',
                ),
                'Record' =>
                (object) array(
                    'RecordIdentifier' => '1386118',
                    'CreationYear' => '2011',
                    'RecordSerialNumber' => '3',
                    'CaseFileReference' => '340222',
                    'RecordSequenceNumber' => '45285',
                    'RegistrationDate' => '2011-03-08',
                    'DocumentDate' => '2011-03-08',
                    'DocumentDateUnknownIndicator' => 'false',
                    'DescriptionText' => 'Testskabelon til Natur og miljø',
                    'AlternativeDescriptionText' =>
                    (object) array(
                    ),
                    'PublicationIndicator' => '1',
                    'RecordPaperStorageIndicator' => 'false',
                    'RecordLatestUpdateDate' => '2011-03-08',
                    'CaseFileManagerReference' => '1017',
                    'DocumentTypeCode' => 'U',
                    'RecordStatusCode' => 'E',
                    'AccessCode' => 'KK',
                ),
            ),
            3 =>
            (object) array(
                'Document' =>
                (object) array(
                    'DocumentIdentifier' => '1420175',
                    'DocumentCategoryCode' => 'Besvarelse',
                    'DocumentTitleText' => 'Test vedr 2 underskrifter',
                    'DocumentPaperStorageIndicator' => 'false',
                    'DocumentStatusCode' => 'B',
                ),
                'DocumentLink' =>
                (object) array(
                    'DocumentLinkTypeCode' => 'H',
                    'RecordReference' => '1420178',
                    'DocumentReference' => '1420175',
                    'LinkDate' => '2011-04-28',
                ),
                'DocumentVersion' =>
                (object) array(
                    'DocumentVersionIdentifier' => '1',
                    'DocumentReference' => '1420175',
                    'DocumentFileReference' => '3081831',
                    'VersionNumber' => '1',
                    'ActiveIndicator' => 'true',
                    'RegisteringOfficerReference' => '1017',
                    'VariantTypeCode' => 'P',
                ),
                'Record' =>
                (object) array(
                    'RecordIdentifier' => '1420178',
                    'CreationYear' => '2011',
                    'RecordSerialNumber' => '4',
                    'CaseFileReference' => '340222',
                    'RecordSequenceNumber' => '79339',
                    'RegistrationDate' => '2011-04-28',
                    'DocumentDate' => '2011-04-28',
                    'DocumentDateUnknownIndicator' => 'false',
                    'DescriptionText' => 'Test vedr 2 underskrifter',
                    'AlternativeDescriptionText' =>
                    (object) array(
                    ),
                    'PublicationIndicator' => '3',
                    'RecordPaperStorageIndicator' => 'false',
                    'RecordLatestUpdateDate' => '2011-04-28',
                    'CaseFileManagerReference' => '1017',
                    'DocumentTypeCode' => 'U',
                    'RecordStatusCode' => 'R',
                    'AccessCode' => 'KK',
                ),
            ),
        );
      default:
        return parent::getCaseDocs($id);
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

  public function getDocData($ref, $ver) {
    return parent::getDocData($ref, $ver);
  }

}