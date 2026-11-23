//
#ifndef _TtC4Jobs12DraftJSBlock_h
#define _TtC4Jobs12DraftJSBlock_h
@import Foundation;

@class Jobs.DraftJSBlockType, _$sSS, _$sSSSg, _$sSa -> Jobs.DraftJSEntityRange, _$sSa -> Jobs.DraftJSInlineStyleRange ?, _$sSiSg, _TtCs12_SwiftObject;

@interface Jobs.DraftJSBlock : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? key;
    Swift.String text;
    Jobs.DraftJSBlockType type;
    Swift.Int? depth;
    Swift.Array -> Jobs.DraftJSInlineStyleRange ? inlineStyleRanges;
    Swift.Array -> Jobs.DraftJSEntityRange entityRanges;
}

@end

#endif /* _TtC4Jobs12DraftJSBlock_h */
