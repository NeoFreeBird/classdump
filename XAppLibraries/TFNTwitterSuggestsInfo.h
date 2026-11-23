//
#ifndef TFNTwitterSuggestsInfo_h
#define TFNTwitterSuggestsInfo_h
@import Foundation;

@class NSObject, NSString;

@interface TFNTwitterSuggestsInfo : NSObject

@property (readonly, copy, nonatomic) NSString *controllerData;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, copy, nonatomic) NSString *sourceData;
@property (readonly, copy, nonatomic) NSString *suggestionType;
@property (readonly, nonatomic) _Bool isSuggestionTypeRecommended;
@property (readonly, nonatomic) _Bool isSuggestionTypeRanked;

/* instance methods */
- (id)initWithControllerData:(id)data scribeComponent:(id)component scribeElement:(id)element sourceData:(id)data suggestionType:(id)type;
- (id)scribeSuggestionDetails;
- (id)description;

@end

#endif /* TFNTwitterSuggestsInfo_h */
