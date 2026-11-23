//
#ifndef _TtC14T1TwitterSwift27URTTimelineMediaGridAdapter_h
#define _TtC14T1TwitterSwift27URTTimelineMediaGridAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, _$sSo16TIPImagePipelineC, _$sSo23T1StatusTableRowAdapterC;

@interface T1TwitterSwift.URTTimelineMediaGridAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    __C.T1StatusTableRowAdapter statusSelectionAdapter;
    __C.TIPImagePipeline imagePipeline;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift27URTTimelineMediaGridAdapter_h */
