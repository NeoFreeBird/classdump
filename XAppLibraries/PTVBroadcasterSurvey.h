//
#ifndef PTVBroadcasterSurvey_h
#define PTVBroadcasterSurvey_h
@import Foundation;

@class NSDictionary, NSObject;

@interface PTVBroadcasterSurvey : NSObject

@property (readonly, nonatomic) _Bool shouldShowSurveyOnBroadcastEnd;
@property (nonatomic) _Bool didComplete;
@property (nonatomic) _Bool didSkip;
@property (nonatomic) _Bool optedIn;
@property (nonatomic) unsigned long long starRating;
@property (retain, nonatomic) NSDictionary *answers;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)_unpackDictionary:(id)dictionary;

@end

#endif /* PTVBroadcasterSurvey_h */
