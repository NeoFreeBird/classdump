//
#ifndef ONBComponentTransformerController_h
#define ONBComponentTransformerController_h
@import Foundation;

#include "ONBComponentTransformer-Protocol.h"
#include "ONBComponentTransformerControllerDelegate-Protocol.h"

@class NSArray, NSMapTable, NSObject, OCFShowMore, TFNDataViewItem;

@interface ONBComponentTransformerController : NSObject {
    /* instance variables */
    id <ONBComponentTransformerControllerDelegate> _delegate;
    _Bool _submittable;
    NSArray<ONBComponentTransformer> *_componentTransformers;
    long long _numberOfComponentsToShow;
    NSMapTable *_mutableComponentToViewModelMap;
    TFNDataViewItem *_showMoreItem;
    OCFShowMore *_showMore;
}

/* class methods */
+ (id)private_transformersByComponent;

/* instance methods */
- (id)initWithAccount:(id)account mutableComponents:(id)components showMore:(id)more shouldDisplayCellBorders:(_Bool)borders delegate:(id)delegate;
- (id)private_sectionsWithComponentSections:(id)sections;
- (void)registerViewAdaptersForViewController:(id)controller;
- (id)updatedSections;
- (id)verticalStackComponentViewForBarButtons:(_Bool)buttons usingContentEdgeInsetsBlock:(id /* block */)block;
- (id)verticalStackComponentViewForBarButtons:(_Bool)buttons usingContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)horizontalStackComponentViewForBarButtons:(_Bool)buttons usingContentEdgeInsetsBlock:(id /* block */)block;
- (id)horizontalStackComponentViewForBarButtons:(_Bool)buttons usingContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)updatedComponentViewsForBarButtons:(_Bool)buttons usingContentEdgeInsetsBlock:(id /* block */)block;
- (id)embeddedButtonForComponent:(id)component;
- (_Bool)updateRichText:(id)text forComponent:(id)component;
- (_Bool)updateNumberValue:(id)value forComponent:(id)component;
- (_Bool)updateVisibility:(_Bool)visibility forComponent:(id)component;
- (id)private_stackComponentViewWithSpacing:(double)spacing forBarButtons:(_Bool)buttons vertical:(_Bool)vertical usingContentEdgeInsetsBlock:(id /* block */)block;
- (id)private_dataViewItemForShowMoreText:(id)text actionBlock:(id /* block */)block;

@end

#endif /* ONBComponentTransformerController_h */
