//
#ifndef _TtC4Grok33GrokImaginePostMetadataDownloader_h
#define _TtC4Grok33GrokImaginePostMetadataDownloader_h
@import Foundation;

@class NSObject, NSString, _$sSDySSScT -> Grok.GrokImaginePostMetadata _$ss5ErrorMp _$sG, _$sSo7NSCacheCySo8NSStringC Grok.GrokImaginePostMetadata;

@interface Grok.GrokImaginePostMetadataDownloader : NSObject { // (Swift)
    /* instance variables */
    __C.NSCache empty-list __C.NSString Grok.GrokImaginePostMetadata cache;
    Swift.Dictionary empty-list Swift.StringSwift.Task -> Grok.GrokImaginePostMetadata protocol descriptor for Swift.Error _$sG pendingTasks;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)downloadWithGrokPostID:(NSString *)id completionHandler:(id /* block */)handler;

@end

#endif /* _TtC4Grok33GrokImaginePostMetadataDownloader_h */
