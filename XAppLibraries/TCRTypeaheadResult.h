//
#ifndef TCRTypeaheadResult_h
#define TCRTypeaheadResult_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TCRTypeaheadResult : NSObject

@property (readonly, copy, nonatomic) NSArray *pinnedItems;
@property (readonly, copy, nonatomic) NSArray *resultItems;
@property (readonly, copy, nonatomic) NSArray *allItems;
@property (readonly, copy, nonatomic) NSString *typeaheadString;

/* instance methods */
- (id)initWithTypeaheadString:(id)string pinnedItems:(id)items resultItems:(id)items;
- (id)init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToResult:(id)result;

@end

#endif /* TCRTypeaheadResult_h */
