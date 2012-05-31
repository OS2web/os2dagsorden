<?php

/**
 * @file
 * Home of the FeedsSOAPFetcher and related classes.
 * Depends on soapclient module.
 *
 * Inspired by roderik (http://drupal.org/user/8841),
 * based on various files in Feeds distribution by alex_b
 * and SOAP Client module by ilo.
 */

/**
 * Result of FeedsSOAPFetcher::fetch().
 */
class FeedsSOAPFetcherResult extends FeedsFetcherResult {

  protected $config;

  /**
   * Constructor.
   */
  public function __construct($config) {
    $this->config = $config;
    //parent::__construct();
  }

  /**
   * Overrides FeedsFetcherResult::getRaw();
   */
  public function getRaw() {	  
    $client = new SoapClient($this->config['wsdl_url']);

    // Parse paremeters    
    $paramlines    = explode("\n", $this->config['method_parameters']);
    $parameters = array();
    foreach ($paramlines as $param) {
      list($name, $value) = explode('=', $param);
      if ( isset($value) ) {
        // Named parameters
        $parameters[trim($name)] = trim($value);
      }
      else {
        $parameters[] = trim($name);
      }
    }
    // Invoke web method
    $response = $client->__soapCall($this->config['service_method_name'], array('parameters'=>$parameters));
    // Return first element of response array
    return reset($response);
  }
}

/**
 * Fetches data via SOAP.
 */
class FeedsSOAPFetcher extends FeedsFetcher {
  
  /**
   * Implements FeedsFetcher::fetch().
   */
  public function fetch(FeedsSource $source) {	
    return new FeedsSOAPFetcherResult($this->config);
  }

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'wsdl_url' => '',
      'service_method_name' => '',
      'method_parameters' => '',
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['wsdl_url'] = array(
      '#type' => 'textfield',
      '#title' => t('Web Service WSDL URL'),
      '#description' => t('Enter the URL of the web service WSDL.'),
      '#default_value' => $this->config['wsdl_url'],
    );
    $form['service_method_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Web Service Method'),
      '#description' => t('Enter the web service method name you want to invoke'),
      '#default_value' => $this->config['service_method_name'],
    );
    $form['method_parameters'] = array(
      '#type'  => 'textarea',
      '#title' => t('Method Parameters'),
      '#description' => t('Enter the parameters of the web service method. One parameter per line. '.
                          'For named parameters, the format of <em>name=value</em> may be used. '),
      '#default_value' => $this->config['method_parameters'],
    );    
    return $form;
  }
}
