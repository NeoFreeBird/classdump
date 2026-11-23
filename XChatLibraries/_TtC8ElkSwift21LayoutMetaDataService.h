//
#ifndef _TtC8ElkSwift21LayoutMetaDataService_h
#define _TtC8ElkSwift21LayoutMetaDataService_h
@import Foundation;

@class _$sSDySS ElkSwift.LayoutAlgorithmData, _$sSDySS ElkSwift.LayoutCategoryData, _$sSDySS ElkSwift.LayoutOptionData, _$sSp -> __C.os_unfair_lock_s, _TtCs12_SwiftObject;

@interface ElkSwift.LayoutMetaDataService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.UnsafeMutablePointer -> __C.os_unfair_lock_s _stateLock;
    Swift.Dictionary empty-list Swift.String ElkSwift.LayoutAlgorithmData layoutAlgorithmMap;
    Swift.Dictionary empty-list Swift.String ElkSwift.LayoutOptionData layoutOptionMap;
    Swift.Dictionary empty-list Swift.String ElkSwift.LayoutOptionData legacyLayoutOptionMap;
    Swift.Dictionary empty-list Swift.String ElkSwift.LayoutCategoryData layoutCategoryMap;
    Swift.Dictionary empty-list Swift.String ElkSwift.LayoutAlgorithmData algorithmSuffixMap;
    Swift.Dictionary empty-list Swift.String ElkSwift.LayoutOptionData optionSuffixMap;
}

@end

#endif /* _TtC8ElkSwift21LayoutMetaDataService_h */
