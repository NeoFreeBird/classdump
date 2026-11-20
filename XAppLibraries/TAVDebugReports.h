//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVDebugReports_h
#define TAVDebugReports_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface TAVDebugReports : NSObject {
    /* instance variables */
    NSMutableArray *_reports;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addReport:(id)report;
- (id)dumpReports;

@end

#endif /* TAVDebugReports_h */
