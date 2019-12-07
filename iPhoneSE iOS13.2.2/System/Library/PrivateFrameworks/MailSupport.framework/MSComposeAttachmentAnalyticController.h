/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSDiagnosticManager;

@interface MSComposeAttachmentAnalyticController : NSObject {

	long long _totalDrawingsInsertedCount;
	MSDiagnosticManager* _diagnosticManager;

}

@property (nonatomic,retain) MSDiagnosticManager * diagnosticManager;              //@synthesize diagnosticManager=_diagnosticManager - In the implementation block
-(void)_submitFinalDrawingInsertCount:(long long)arg1 sentMessage:(BOOL)arg2 ;
-(MSDiagnosticManager *)diagnosticManager;
-(id)initWithDiagnosticManager:(id)arg1 totalDrawingsInsertedCount:(long long)arg2 ;
-(void)sendMessageWithActualDrawingInsertCount:(long long)arg1 ;
-(void)abandonMessageWithActualDrawingInsertCount:(long long)arg1 ;
-(void)setDiagnosticManager:(MSDiagnosticManager *)arg1 ;
@end
