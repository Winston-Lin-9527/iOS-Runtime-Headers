/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUDownloadTaskProgress : NSObject {

	BOOL _isActive;
	long long _totalBytesDownloaded;
	long long _totalBytesExpectedToBeDownloaded;

}

@property (assign,nonatomic) BOOL isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) long long totalBytesDownloaded;                          //@synthesize totalBytesDownloaded=_totalBytesDownloaded - In the implementation block
@property (assign,nonatomic) long long totalBytesExpectedToBeDownloaded;              //@synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded - In the implementation block
-(id)description;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
-(long long)totalBytesExpectedToBeDownloaded;
-(void)setTotalBytesExpectedToBeDownloaded:(long long)arg1 ;
-(void)setTotalBytesDownloaded:(long long)arg1 ;
-(long long)totalBytesDownloaded;
@end
