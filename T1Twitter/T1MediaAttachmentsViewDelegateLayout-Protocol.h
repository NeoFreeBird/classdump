//
#ifndef T1MediaAttachmentsViewDelegateLayout_Protocol_h
#define T1MediaAttachmentsViewDelegateLayout_Protocol_h
@import Foundation;

#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@protocol T1MediaAttachmentsViewDelegateLayout <UICollectionViewDelegateFlowLayout>

@required

@optional

/* optional instance methods */
- (void)collectionView:(id)view willInsertItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDeleteItemAtIndexPath:(id)path;

@end

#endif /* T1MediaAttachmentsViewDelegateLayout_Protocol_h */
