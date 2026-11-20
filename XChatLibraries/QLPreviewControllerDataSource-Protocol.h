//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef QLPreviewControllerDataSource_Protocol_h
#define QLPreviewControllerDataSource_Protocol_h
@import Foundation;

@protocol QLPreviewControllerDataSource

@required

/* required instance methods */
- (long long)numberOfPreviewItemsInPreviewController:(id)controller;
- (long long)numberOfPreviewItemsInPreviewController:(id)controller;
- (id)previewController:(id)controller previewItemAtIndex:(long long)index;
- (id)previewController:(id)controller previewItemAtIndex:(long long)index;

@optional

@end

#endif /* QLPreviewControllerDataSource_Protocol_h */
