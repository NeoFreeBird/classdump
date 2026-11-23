//
#ifndef _TtC14TwitterUISwiftP33_734B742347080759AB1F5C00E55C5BFF28SliceItemsDataViewController_h
#define _TtC14TwitterUISwiftP33_734B742347080759AB1F5C00E55C5BFF28SliceItemsDataViewController_h
@import Foundation;

#include "TUIErrorDataViewAdapterDelegate-Protocol.h"

@class TFNItemsDataViewController;

@interface TwitterUISwift.(SliceItemsDataViewController in _734B742347080759AB1F5C00E55C5BFF) : TFNItemsDataViewController <TUIErrorDataViewAdapterDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 scribeComponents;
}

/* instance methods */
- (void)errorItemTapped:(id)tapped;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14TwitterUISwiftP33_734B742347080759AB1F5C00E55C5BFF28SliceItemsDataViewController_h */
