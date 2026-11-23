//
#ifndef T1UserRecommendationListUserRecommendationPlusControl_h
#define T1UserRecommendationListUserRecommendationPlusControl_h
@import Foundation;

#include "T1UserRecommendationListCheckableActionControl-Protocol.h"

@class NSString, TFNButton, TFSTwitterScribeContext, TFSTwitterUserReference;

@interface T1UserRecommendationListUserRecommendationPlusControl : TFNButton <T1UserRecommendationListCheckableActionControl>

@property (nonatomic) _Bool checked;
@property (retain, nonatomic) TFSTwitterUserReference *associatedUserReference;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithStyle:(long long)style sizeClass:(long long)_class;
- (id)private_imageName;
- (long long)private_style;
- (void)private_toggleSelection;
- (void)private_updateAppearance;
- (_Bool)isChecked;

@end

#endif /* T1UserRecommendationListUserRecommendationPlusControl_h */
