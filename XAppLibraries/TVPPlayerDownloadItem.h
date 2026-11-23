//
#ifndef TVPPlayerDownloadItem_h
#define TVPPlayerDownloadItem_h
@import Foundation;

#include "TVPPlayerDownloadItemDelegate-Protocol.h"

@class NSArray, NSError, NSObject, NSURL;
@protocol TNUSimpleDownload;

@interface TVPPlayerDownloadItem : NSObject {
    /* instance variables */
    id <TNUSimpleDownload> _download;
    NSError *_downloadError;
}

@property (weak, nonatomic) id <TVPPlayerDownloadItemDelegate> delegate;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, copy, nonatomic) NSArray *cacheLookupAlternateURLs;
@property (readonly, nonatomic) NSURL *downloadItemFileURL;
@property (readonly, nonatomic) long long status;

/* class methods */
+ (id)playerDownloadItemWithSourceURL:(id)url cacheLookupAlternateURLs:(id)urls;
+ (void)storePlayerFileURL:(id)url copyingFile:(_Bool)file forDownloadURL:(id)url completion:(id /* block */)completion;
+ (void)clearAllCacheEntries;
+ (unsigned long long)currentCacheSize;
+ (unsigned long long)maxCacheSize;

/* instance methods */
- (id)initWithSourceURL:(id)url cacheLookupAlternateURLs:(id)urls;
- (void)dealloc;
- (void)startDownload;
- (void)stopDownload;
- (void)private_cacheLookup:(id)lookup orDownload:(id)download;
- (void)private_stopDownload;
- (void)private_handleCompletion:(id)completion fileURL:(id)url error:(id)error;

@end

#endif /* TVPPlayerDownloadItem_h */
