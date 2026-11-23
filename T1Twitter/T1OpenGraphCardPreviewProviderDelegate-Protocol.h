//
#ifndef T1OpenGraphCardPreviewProviderDelegate_Protocol_h
#define T1OpenGraphCardPreviewProviderDelegate_Protocol_h
@import Foundation;

@protocol T1OpenGraphCardPreviewProviderDelegate

@required

/* required instance methods */
- (_Bool)openGraphCardPreviewProviderIsCardPreviewAllowed:(id)allowed;
- (_Bool)openGraphCardPreviewProvider:(id)provider shouldRenderCardPreviewForURL:(id)url;
- (void)openGraphCardPreviewProviderDidStartFetching:(id)fetching;
- (void)openGraphCardPreviewProvider:(id)provider didShowCardPreviewWithCardData:(id)data;
- (void)openGraphCardPreviewProvider:(id)provider didRemoveCardPreviewForReason:(unsigned long long)reason withCardData:(id)data;

@optional

@end

#endif /* T1OpenGraphCardPreviewProviderDelegate_Protocol_h */
