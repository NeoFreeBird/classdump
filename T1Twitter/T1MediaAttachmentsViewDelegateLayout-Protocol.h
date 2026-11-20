//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
