//
#ifndef NSArray_PTVAdditions_h
#define NSArray_PTVAdditions_h
@import Foundation;

@interface NSArray (PTVAdditions)

/* instance methods */
- (id)ocf_richTextQuantityPairArrayForQuantity:(long long)quantity;
- (id)ocf_flattenedComponentDictionaries;
- (id)tav_map:(id /* block */)tav_map;
- (id)ptv_randomObject;
- (id)ptv_select:(id /* block */)ptv_select;
- (id)ptv_map:(id /* block */)ptv_map;
- (id)ptv_flatMap:(id /* block */)map;
- (id)ptv_firstWhere:(id /* block */)where;

@end

#endif /* NSArray_PTVAdditions_h */
