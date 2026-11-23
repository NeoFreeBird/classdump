//
#ifndef T1ChannelLoggingViewController_h
#define T1ChannelLoggingViewController_h
@import Foundation;

#include "TDTChannelLoggingOutputStreamDelegate-Protocol.h"

@class NSString, TDTChannelLoggingOutputStream, TFNItemsDataViewController;

@interface T1ChannelLoggingViewController : TFNItemsDataViewController <TDTChannelLoggingOutputStreamDelegate>

@property (readonly, nonatomic) TDTChannelLoggingOutputStream *stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (id)initWithChannelLoggingOutputStream:(id)stream;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)_updateSections;
- (void)clearLog:(id)log;
- (void)stream:(id)stream didAppendLogEntries:(unsigned long long)entries didPruneLogEntries:(unsigned long long)entries;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;

@end

#endif /* T1ChannelLoggingViewController_h */
