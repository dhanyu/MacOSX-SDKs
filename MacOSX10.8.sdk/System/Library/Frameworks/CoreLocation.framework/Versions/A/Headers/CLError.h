
/*
 *  CLError.h
 *  CoreLocation
 *
 *  Copyright (c) 2008-2010 Apple Inc. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CLAvailability.h>

/*
 *  CLError
 *  
 *  Discussion:
 *    Error returned as code to NSError from CoreLocation.
 */
typedef enum {
    kCLErrorLocationUnknown  = 0,         // location is currently unknown, but CL will keep trying
    kCLErrorDenied,                       // CL access has been denied (eg, user declined location use)
    kCLErrorNetwork,                      // general, network-related error
    kCLErrorHeadingFailure,               // heading could not be determined
    kCLErrorRegionMonitoringDenied,       // Location region monitoring has been denied by the user
    kCLErrorRegionMonitoringFailure,      // A registered region cannot be monitored
    kCLErrorRegionMonitoringSetupDelayed, // CL could not immediately initialize region monitoring
    kCLErrorRegionMonitoringResponseDelayed, // While events for this fence will be delivered, delivery will not occur immediately
    kCLErrorGeocodeFoundNoResult,         // A geocode request yielded no result
    kCLErrorGeocodeFoundPartialResult,    // A geocode request yielded a partial result
    kCLErrorGeocodeCanceled               // A geocode request was cancelled
} CLError;

/*
 *  kCLErrorUserInfoAlternateRegionKey
 *  
 *  Discussion:
 *    When an error with code kCLErrorRegionMonitoringResponseDelayed is received, this key may be populated
 *    in the userInfo dictionary.  The value is a CLRegion that the location service can more effectively monitor.
 */
extern NSString *const kCLErrorUserInfoAlternateRegionKey NS_AVAILABLE(10_7, 5_0);
