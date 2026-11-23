//
#ifndef T1UserRecommendationListCheckableActionControl_Protocol_h
#define T1UserRecommendationListCheckableActionControl_Protocol_h
@import Foundation;

#include "T1UserViewActionControl-Protocol.h"

@class TFSTwitterUserReference;

@protocol T1UserRecommendationListCheckableActionControl <T1UserViewActionControl>

@required

@property (nonatomic) _Bool checked;
@property (retain, nonatomic) TFSTwitterUserReference *associatedUserReference;
@property (copy, nonatomic) id /* block */ updateBlock;

/* required instance methods */
- (_Bool)isChecked;

@optional

@end

#endif /* T1UserRecommendationListCheckableActionControl_Protocol_h */
