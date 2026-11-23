//
#ifndef FIRCLSLaunchMarkerModel_h
#define FIRCLSLaunchMarkerModel_h
@import Foundation;

#include "FIRCLSFileManager.h"

@class NSObject;

@interface FIRCLSLaunchMarkerModel : NSObject

@property (retain, nonatomic) FIRCLSFileManager *fileManager;

/* instance methods */
- (id)initWithFileManager:(id)manager;
- (_Bool)checkForAndCreateLaunchMarker;
- (id)launchFailureMarkerPath;
- (_Bool)createLaunchFailureMarker;
- (_Bool)launchFailureMarkerPresent;
- (_Bool)removeLaunchFailureMarker;

@end

#endif /* FIRCLSLaunchMarkerModel_h */
