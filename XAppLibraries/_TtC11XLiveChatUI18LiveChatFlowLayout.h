//
#ifndef _TtC11XLiveChatUI18LiveChatFlowLayout_h
#define _TtC11XLiveChatUI18LiveChatFlowLayout_h
@import Foundation;

@class UICollectionViewFlowLayout, _$sSh -> _$s10Foundation9IndexPathVMn;

@interface XLiveChatUI.LiveChatFlowLayout : UICollectionViewFlowLayout { // (Swift)
    /* instance variables */
    Swift.Set -> nominal type descriptor for Foundation.IndexPath insertedIndexPaths;
}

/* instance methods */
- (void)prepareForCollectionViewUpdates:(id)updates;
- (void)finalizeCollectionViewUpdates;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11XLiveChatUI18LiveChatFlowLayout_h */
