//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13ChatUtilities10TextParser_h
#define _TtC13ChatUtilities10TextParser_h
@import Foundation;

@class _$sSa -> ChatUtilities.XTextRange, _TtCs12_SwiftObject;

@interface ChatUtilities.TextParser : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ChatUtilities.XTextRange links;
    Swift.Array -> ChatUtilities.XTextRange hashtags;
    Swift.Array -> ChatUtilities.XTextRange usernames;
    Swift.Array -> ChatUtilities.XTextRange stockSymbols;
    Swift.Array -> ChatUtilities.XTextRange emailAddresses;
}

@end

#endif /* _TtC13ChatUtilities10TextParser_h */
