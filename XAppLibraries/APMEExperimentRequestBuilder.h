//
#ifndef APMEExperimentRequestBuilder_h
#define APMEExperimentRequestBuilder_h
@import Foundation;

@class GULMutableDictionary, NSObject;

@interface APMEExperimentRequestBuilder : NSObject {
    /* instance variables */
    GULMutableDictionary *_clientPropertyBySDKName;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addSDKProperty:(id)sdkproperty;
- (id)appPropertyProto;
- (id)request;

@end

#endif /* APMEExperimentRequestBuilder_h */
