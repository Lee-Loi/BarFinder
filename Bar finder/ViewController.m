//
//  ViewController.m
//  Bar finder
//
//  Created by Lee-Loi Chieng on 24/11/2015.
//  Copyright © 2015 Lee-Loi Chieng. All rights reserved.
//  Location services function taken from SDK Samples: https://developers.google.com/maps/documentation/ios-sdk/code-samples
//

#import "ViewController.h"
@import GoogleMaps;

@implementation ViewController {
    GMSMapView *mapView_;
    // Initalise Location Services
    CLLocationManager *locationManager_;
    BOOL firstLocationUpdate_;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Create a GMSCameraPosition that tells the map to display the
    // coordinate 53.342492,-6.259758 at zoom level 15.
    GMSCameraPosition *camera = [GMSCameraPosition cameraWithLatitude:53.342492
                                                            longitude:-6.259758
                                                                 zoom:15];
    mapView_ = [GMSMapView mapWithFrame:CGRectZero camera:camera];
    mapView_.settings.myLocationButton = YES;
    
    // Listen to the myLocation property of GMSMapView.
    [mapView_ addObserver:self
               forKeyPath:@"myLocation"
                  options:NSKeyValueObservingOptionNew
                  context:NULL];
    
    self.view = mapView_;
    
    // Imports list of bars
    #import "BarList.h"
    
    // Ask for My Location data after the map has already been added to the UI.
    dispatch_async(dispatch_get_main_queue(), ^{
        mapView_.myLocationEnabled = YES;
    });
}

- (void)dealloc {
    [mapView_ removeObserver:self
                  forKeyPath:@"myLocation"
                     context:NULL];
}

#pragma mark - KVO updates

- (void)observeValueForKeyPath:(NSString *)keyPath
                      ofObject:(id)object
                        change:(NSDictionary *)change
                       context:(void *)context {
    if (!firstLocationUpdate_) {
        // If the first location update has not yet been recieved, then jump to that
        // location.
        firstLocationUpdate_ = YES;
        CLLocation *location = [change objectForKey:NSKeyValueChangeNewKey];
        mapView_.camera = [GMSCameraPosition cameraWithTarget:location.coordinate
                                                         zoom:15];
    }
}

@end