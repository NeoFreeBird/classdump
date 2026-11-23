//
#ifndef T1VoiceRoomLegacyItemsDataViewController_h
#define T1VoiceRoomLegacyItemsDataViewController_h
@import Foundation;

#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TFNToasterContextDelegate-Protocol.h"

@class NSString, TASSettings, TFNItemsDataViewController;

@interface T1VoiceRoomLegacyItemsDataViewController : TFNItemsDataViewController <TFNToasterContextDelegate, TASSpaceModelObserver>

@property (readonly, nonatomic) id <TASSpaceModel> spaceModel;
@property (retain, nonatomic) TASSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSpaceModel:(id)model;
- (void)viewDidLoad;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (void)spaceModel:(id)model didUpdateUsersModels:(id)models;
- (id)scribe;
- (id)scribePage;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (void)t1_logClickActionOnElement:(id)element inComponent:(id)component;
- (id)scribePageForToaster:(id)toaster;

@end

#endif /* T1VoiceRoomLegacyItemsDataViewController_h */
