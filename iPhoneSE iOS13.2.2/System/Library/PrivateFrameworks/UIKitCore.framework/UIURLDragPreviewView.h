/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSArray, NSString, NSURL;

@interface UIURLDragPreviewView : UIView {

	UILabel* _titleLabel;
	UILabel* _urlLabel;
	NSArray* _titleAndUrlConstraints;
	NSArray* _urlOnlyConstraints;
	NSString* _title;
	NSURL* _url;
	NSString* _urlText;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * urlText;              //@synthesize urlText=_urlText - In the implementation block
+(void)initialize;
+(id)_titleFont;
+(id)viewWithURL:(id)arg1 ;
+(id)viewWithTitle:(id)arg1 URL:(id)arg2 ;
+(id)_urlFont;
+(id)viewWithTitle:(id)arg1 URLText:(id)arg2 ;
+(id)viewWithURLText:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setUrlText:(NSString *)arg1 ;
-(NSString *)urlText;
@end
