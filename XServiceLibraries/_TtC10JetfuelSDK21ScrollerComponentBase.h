//
#ifndef _TtC10JetfuelSDK21ScrollerComponentBase_h
#define _TtC10JetfuelSDK21ScrollerComponentBase_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"

@class JetfuelSDK.RenderingDelegate ?, JetfuelSDK.ViewContext, NSObject, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s5UIKit34UICollectionViewDiffableDataSourceCMn _$sySi _$ss5Int64VMn ?, _$sSa -> JetfuelSDK.VDOMRenderer, _$sSiSg, _$sSo16UICollectionViewCSg, _$ss13OpaquePointerVMn ?;

@interface JetfuelSDK.ScrollerComponentBase : NSObject <UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    __C.UICollectionView? collectionView;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource  empty-list Swift.Int nominal type descriptor for Swift.Int64 ? dataSource;
    Swift.Array -> JetfuelSDK.VDOMRenderer renderers;
    Swift.Int? initialPos;
    nominal type descriptor for CoreGraphics.CGFloat gap;
    Swift.Bool bounce;
    JetfuelSDK.RenderingDelegate ? renderingDelegate;
    nominal type descriptor for Swift.OpaquePointer ? node;
    Swift.Bool relayoutScheduled;
}

/* instance methods */
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK21ScrollerComponentBase_h */
