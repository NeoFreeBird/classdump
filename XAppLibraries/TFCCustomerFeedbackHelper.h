//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFCCustomerFeedbackHelper_h
#define TFCCustomerFeedbackHelper_h
@import Foundation;

@class NSObject;

@interface TFCCustomerFeedbackHelper : NSObject

/* class methods */
+ (id)scoreDescriptionTextForScore:(id)score feedbackType:(unsigned long long)type;
+ (id)interpolateButtonColorWithValue:(unsigned long long)value minValue:(unsigned long long)value maxValue:(unsigned long long)value;
+ (id)interpolateCSATButtonColorWithValue:(unsigned long long)value;
+ (id)interpolateNPSButtonColorWithValue:(unsigned long long)value;
+ (_Bool)isValidCSATScore:(unsigned long long)csatscore;
+ (_Bool)isValidNPSScore:(unsigned long long)npsscore;
+ (id)_t1_CSATScoreDescriptionForScore:(unsigned long long)score;

@end

#endif /* TFCCustomerFeedbackHelper_h */
