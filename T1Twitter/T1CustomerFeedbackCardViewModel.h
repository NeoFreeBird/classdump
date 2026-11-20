//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CustomerFeedbackCardViewModel_h
#define T1CustomerFeedbackCardViewModel_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSDate, NSNumber, NSObject, NSString, TFCCardPersistedStateManager, TFNTwitterCardContext;

@interface T1CustomerFeedbackCardViewModel : NSObject

@property (readonly, nonatomic) TFNTwitterCardContext *cardContext;
@property (readonly, nonatomic) TFCCardPersistedStateManager *persistedStateManager;
@property (readonly, copy, nonatomic) NSString *persistedStateCacheId;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *feedbackID;
@property (copy, nonatomic) NSString *privacyPolicyURL;
@property (copy, nonatomic) NSString *questionVariant;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> businessUser;
@property (readonly, nonatomic) unsigned long long feedbackState;
@property (readonly, nonatomic) unsigned long long feedbackType;
@property (readonly, nonatomic) _Bool complete;
@property (readonly, nonatomic) _Bool enabled;
@property (readonly, nonatomic) _Bool scoreSubmitted;
@property (readonly, nonatomic) _Bool test;
@property (readonly, nonatomic) _Bool textSubmitted;
@property (readonly, nonatomic) _Bool expired;
@property (readonly, nonatomic) _Bool scoreAboveTweetThreshold;
@property (nonatomic) _Bool dismissed;
@property (readonly, nonatomic) NSNumber *questionVariantID;
@property (retain, nonatomic) NSNumber *score;
@property (readonly, copy, nonatomic) NSString *legalText;
@property (readonly, copy, nonatomic) NSString *questionVariantFallback;
@property (retain, nonatomic) NSString *comments;
@property (readonly, nonatomic) NSDate *expirationDate;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (_Bool)isDismissed;
- (_Bool)isScoreSubmitted;
- (_Bool)hasComment;
- (_Bool)isComplete;
- (id)localizationPrefix;
- (_Bool)isExpired;
- (_Bool)isScoreAboveTweetThreshold;
- (_Bool)isEnabled;
- (_Bool)isTest;
- (_Bool)isTextSubmitted;

@end

#endif /* T1CustomerFeedbackCardViewModel_h */
