//
#ifndef _TtC10TwitterURT33URTTimelineTweetComposerViewModel_h
#define _TtC10TwitterURT33URTTimelineTweetComposerViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, NSString, Swift.Bool, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV13TweetComposerVMn, _$sSS;

@interface TwitterURT.URTTimelineTweetComposerViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.TweetComposer tweetComposer;
    Swift.String entryID;
    Swift.Bool isPrecededByAncestor;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *url;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT33URTTimelineTweetComposerViewModel_h */
