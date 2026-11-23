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
