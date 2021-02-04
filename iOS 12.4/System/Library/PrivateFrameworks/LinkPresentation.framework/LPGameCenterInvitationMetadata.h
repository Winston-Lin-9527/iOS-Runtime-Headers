/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformerAdaptor.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformerAdaptor.h>

@class NSString, LPImage;

@interface LPGameCenterInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor> {

	unsigned _numberOfPlayers;
	unsigned _minimumNumberOfPlayers;
	unsigned _maximumNumberOfPlayers;
	NSString* _game;
	LPImage* _image;
	LPImage* _icon;

}

@property (nonatomic,copy) NSString * game;                                //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) LPImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned numberOfPlayers;                     //@synthesize numberOfPlayers=_numberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned minimumNumberOfPlayers;              //@synthesize minimumNumberOfPlayers=_minimumNumberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfPlayers;              //@synthesize maximumNumberOfPlayers=_maximumNumberOfPlayers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(unsigned)numberOfPlayers;
-(void)setNumberOfPlayers:(unsigned)arg1 ;
-(unsigned)minimumNumberOfPlayers;
-(void)setMinimumNumberOfPlayers:(unsigned)arg1 ;
-(unsigned)maximumNumberOfPlayers;
-(void)setMaximumNumberOfPlayers:(unsigned)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(id)invitationText;
-(id)playerCountText;
-(void)setGame:(NSString *)arg1 ;
-(NSString *)game;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(LPImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
@end
