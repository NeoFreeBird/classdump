//
#ifndef _TtC16ChatConversation17MessageListLayout_h
#define _TtC16ChatConversation17MessageListLayout_h
@import Foundation;

@class Swift.Bool, UICollectionViewFlowLayout, _$sSh -> _$s10Foundation9IndexPathVMn;

@interface ChatConversation.MessageListLayout : UICollectionViewFlowLayout { // (Swift)
    /* instance variables */
    Swift.Bool isPinnedToBottom;
    Swift.Set -> nominal type descriptor for Foundation.IndexPath appearingInPlaceIndexPaths;
    Swift.Set -> nominal type descriptor for Foundation.IndexPath disappearingInPlaceIndexPaths;
}

/* instance methods */
- (void)prepareForCollectionViewUpdates:(id)updates;
- (void)finalizeCollectionViewUpdates;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16ChatConversation17MessageListLayout_h */
