//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRConversationControlTrayPresenter_h
#define TCRConversationControlTrayPresenter_h
@import Foundation;

#include "TCRConversationControlTrayPresenting-Protocol.h"

@class NSObject;

@interface TCRConversationControlTrayPresenter : NSObject <TCRConversationControlTrayPresenting> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 geoOptions;
    @40@0:8:16@24@32 allowsMultipleSelection;
    @40@0:8:16@24@32 disablesEmptySingleSelectRegionApply;
    @40@0:8:16@24@32 onScribeSelection;
    @40@0:8:16@24@32 onScribeRegionToggle;
    @40@0:8:16@24@32 listContent;
    @40@0:8:16@24@32 regionListContent;
    @40@0:8:16@24@32 isEveryone;
    @40@0:8:16@24@32 restrictions;
    @40@0:8:16@24@32 regionCodes;
    @40@0:8:16@24@32 didChangeSelection;
    @40@0:8:16@24@32 didLeaveTray;
    @40@0:8:16@24@32 types;
}

@property (nonatomic, copy) id /* block */ onDidLeaveTray;

/* instance methods */
- (id)initWithInitialTypes:(id)types types:(id)types geoOptions:(id)options allowsMultipleSelection:(_Bool)selection disablesEmptySingleSelectRegionApply:(_Bool)apply delegate:(id)delegate onScribeSelection:(id /* block */)selection onScribeRegionToggle:(id /* block */)toggle;
- (void)presentFrom:(id)from completion:(id /* block */)completion;
- (id)makePushableTrayScreen;
- (void)updateWithTypes:(id)types geoOptions:(id)options;
- (id)init;

@end

#endif /* TCRConversationControlTrayPresenter_h */
