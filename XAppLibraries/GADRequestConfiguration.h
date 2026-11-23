//
#ifndef GADRequestConfiguration_h
#define GADRequestConfiguration_h
@import Foundation;

@class NSArray, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADRequestConfiguration : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
}

@property (copy, nonatomic) NSString *maxAdContentRating;
@property (copy, nonatomic) NSArray *testDeviceIdentifiers;
@property (copy, nonatomic) NSNumber *tagForUnderAgeOfConsent;
@property (copy, nonatomic) NSNumber *tagForChildDirectedTreatment;
@property (nonatomic) long long publisherPrivacyPersonalizationState;

/* instance methods */
- (id)init;
- (void)setPublisherFirstPartyIDEnabled:(_Bool)idenabled;
- (_Bool)isConfiguredTestDeviceWithDeviceIdentifier:(id)identifier;

@end

#endif /* GADRequestConfiguration_h */
