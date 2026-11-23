//
#ifndef _TtC20GrokMarkdownRenderer13ContentLoader_h
#define _TtC20GrokMarkdownRenderer13ContentLoader_h
@import Foundation;

@class DispatchQueue, _$s7Combine18PassthroughSubjectCMn GrokMarkdownRenderer.ContentLoader.ViewResult _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySS _$ss5NeverOMn, _$sSD -> GrokMarkdownRenderer.ContentLoader.ViewCacheKey _$sSa -> GrokCardsModels.GrokCard, _$sSD -> GrokMarkdownRenderer.ContentLoader.ViewCacheKey _$sSa -> GrokMarkdownRenderer.ViewHierarchy.ViewComponent, _$sSD -> GrokMarkdownRenderer.ContentLoader.ViewCacheKey _$sSayyycSgG, _$sSDySS GrokMarkdownRenderer.ContentLoader.ViewCacheKey, _$sSo8NSObject_pSg, _TtCs12_SwiftObject, __C.UIContentSizeCategory _$sSgyc;

@interface GrokMarkdownRenderer.ContentLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.UIContentSizeCategory _$sSgyc contentSizeCategory;
    DispatchQueue dispatchQueue;
    DispatchQueue concurrentDispatchQueue;
    nominal type descriptor for Combine.PassthroughSubject GrokMarkdownRenderer.ContentLoader.ViewResult nominal type descriptor for Swift.Never asyncLoadedView;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never viewLoaded;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never viewAppeared;
    Swift.Dictionary -> GrokMarkdownRenderer.ContentLoader.ViewCacheKey Swift.Array -> GrokMarkdownRenderer.ViewHierarchy.ViewComponent viewCache;
    Swift.Dictionary -> GrokMarkdownRenderer.ContentLoader.ViewCacheKey Swift.Array -> GrokCardsModels.GrokCard markdownImageCardsCache;
    Swift.Dictionary -> GrokMarkdownRenderer.ContentLoader.ViewCacheKey [(() -> ())?] inFlightLoads;
    Swift.Dictionary empty-list Swift.String GrokMarkdownRenderer.ContentLoader.ViewCacheKey latestKeyForMessage;
    __C.NSObject? memoryWarningObserver;
}

@end

#endif /* _TtC20GrokMarkdownRenderer13ContentLoader_h */
