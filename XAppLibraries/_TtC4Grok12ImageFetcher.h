//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok12ImageFetcher_h
#define _TtC4Grok12ImageFetcher_h
@import Foundation;

@class Grok.ImageCache, _$s7Combine9PublishedVMn _$sSo7UIImageCSg, _$sSo16TIPImagePipelineC, _$sSo22TIPImageFetchOperationCSg, _TtCs12_SwiftObject;

@interface Grok.ImageFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published __C.UIImage? _image;
    __C.TIPImagePipeline imagePipeline;
    Grok.ImageCache cache;
    __C.TIPImageFetchOperation? operation;
}

@end

#endif /* _TtC4Grok12ImageFetcher_h */
