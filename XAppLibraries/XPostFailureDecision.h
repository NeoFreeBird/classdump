//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XPostFailureDecision_h
#define XPostFailureDecision_h
@import Foundation;

@class NSObject, NSString;

@interface XPostFailureDecision : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 decision;
}

@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) _Bool offersDrafts;
@property (nonatomic, readonly) _Bool offersEditLater;
@property (nonatomic, readonly) _Bool offersRules;
@property (nonatomic, readonly) _Bool retries;
@property (nonatomic, readonly) NSString *telemetryName;

/* instance methods */
- (id)init;

@end

#endif /* XPostFailureDecision_h */
