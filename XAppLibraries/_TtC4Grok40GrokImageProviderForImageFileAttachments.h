//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok40GrokImageProviderForImageFileAttachments_h
#define _TtC4Grok40GrokImageProviderForImageFileAttachments_h
@import Foundation;

@class Grok.GrokMediaProvider, Swift.Bool, _$sSa -> Grok.GrokFile, _$sShySSG, _$sSi, _$sSo6UIViewCSgSScSg, _$sySScSg, _$syycSg, _TtCs12_SwiftObject;

@interface Grok.GrokImageProviderForImageFileAttachments : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int initiallySelectedItemIndex;
    Swift.Int numberOfItems;
    ((Swift.String) -> __C.UIView?)? sourceViewForMediaId;
    ((Swift.String) -> ())? prepareSourceViewForMediaId;
    Swift.Array -> Grok.GrokFile fileAttachments;
    Grok.GrokMediaProvider mediaProvider;
    (() -> ())? didUpdateData;
    Swift.Bool shouldLoadImages;
    Swift.Set<Swift.String> loadingMediaIds;
}

@end

#endif /* _TtC4Grok40GrokImageProviderForImageFileAttachments_h */
