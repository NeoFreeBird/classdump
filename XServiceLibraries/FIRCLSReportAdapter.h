//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSReportAdapter_h
#define FIRCLSReportAdapter_h
@import Foundation;

#include "FIRCLSInstallIdentifierModel.h"
#include "FIRCLSRecordApplication.h"
#include "FIRCLSRecordHost.h"
#include "FIRCLSRecordIdentity.h"
#include "GDTCOREventDataObject-Protocol.h"

@class NSObject, NSString;

@interface FIRCLSReportAdapter : NSObject <GDTCOREventDataObject>

@property (retain, nonatomic) FIRCLSInstallIdentifierModel *installIDModel;
@property (copy, nonatomic) NSString *fiid;
@property (copy, nonatomic) NSString *authToken;
@property (readonly, nonatomic) _Bool hasCrashed;
@property (retain, nonatomic) NSString *folderPath;
@property (retain, nonatomic) NSString *googleAppID;
@property (retain, nonatomic) FIRCLSRecordIdentity *identity;
@property (retain, nonatomic) FIRCLSRecordHost *host;
@property (retain, nonatomic) FIRCLSRecordApplication *application;
@property (nonatomic) struct _google_crashlytics_Report { struct pb_bytes_array_s *x0; struct pb_bytes_array_s *x1; int x2; struct pb_bytes_array_s *x3; struct pb_bytes_array_s *x4; struct pb_bytes_array_s *x5; struct _google_crashlytics_FilesPayload { unsigned int x0; struct _google_crashlytics_FilesPayload_File *x1; } x6; struct pb_bytes_array_s *x7; struct pb_bytes_array_s *x8; struct pb_bytes_array_s *x9; } report;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)combinedDictionariesFromFilePath:(id)path;
+ (id)dictionariesFromEachLineOfFile:(id)file;

/* instance methods */
- (id)initWithPath:(id)path googleAppId:(id)id installIDModel:(id)idmodel fiid:(id)fiid authToken:(id)token;
- (void)dealloc;
- (void)loadMetaDataFile;
- (id)transportBytes;
- (struct _google_crashlytics_Report { struct pb_bytes_array_s *x0; struct pb_bytes_array_s *x1; int x2; struct pb_bytes_array_s *x3; struct pb_bytes_array_s *x4; struct pb_bytes_array_s *x5; struct _google_crashlytics_FilesPayload { unsigned int x0; struct _google_crashlytics_FilesPayload_File *x1; } x6; struct pb_bytes_array_s *x7; struct pb_bytes_array_s *x8; struct pb_bytes_array_s *x9; })protoReport;
- (struct _google_crashlytics_FilesPayload { unsigned int x0; struct _google_crashlytics_FilesPayload_File *x1; })protoFilesPayload;
- (id)clsRecordFilePaths;
- (int)protoPlatformFromString:(id)string;

@end

#endif /* FIRCLSReportAdapter_h */
