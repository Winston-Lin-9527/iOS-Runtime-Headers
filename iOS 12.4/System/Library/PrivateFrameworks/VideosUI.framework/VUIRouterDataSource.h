/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIEventDataSource;

@interface VUIRouterDataSource : NSObject {

	VUIEventDataSource* _selectEventDataSource;
	VUIEventDataSource* _playEventDataSource;
	VUIEventDataSource* _contextMenuEventDataSource;

}

@property (nonatomic,retain) VUIEventDataSource * selectEventDataSource;                   //@synthesize selectEventDataSource=_selectEventDataSource - In the implementation block
@property (nonatomic,retain) VUIEventDataSource * playEventDataSource;                     //@synthesize playEventDataSource=_playEventDataSource - In the implementation block
@property (nonatomic,retain) VUIEventDataSource * contextMenuEventDataSource;              //@synthesize contextMenuEventDataSource=_contextMenuEventDataSource - In the implementation block
-(VUIEventDataSource *)contextMenuEventDataSource;
-(id)initWithRouterData:(id)arg1 viewElement:(id)arg2 ;
-(VUIEventDataSource *)playEventDataSource;
-(VUIEventDataSource *)selectEventDataSource;
-(void)setSelectEventDataSource:(VUIEventDataSource *)arg1 ;
-(void)setPlayEventDataSource:(VUIEventDataSource *)arg1 ;
-(void)setContextMenuEventDataSource:(VUIEventDataSource *)arg1 ;
@end
