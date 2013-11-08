/*
Navicat MySQL Data Transfer

Source Server         : 1
Source Server Version : 50529
Source Host           : localhost:3306
Source Database       : adx

Target Server Type    : MYSQL
Target Server Version : 50529
File Encoding         : 65001

Date: 2013-11-07 19:53:17
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `object_homes`
-- ----------------------------
DROP TABLE IF EXISTS `object_homes`;
CREATE TABLE `object_homes` (
  `ObjectID` int(11) NOT NULL AUTO_INCREMENT,
  `ObjectUID` bigint(20) NOT NULL DEFAULT '0',
  `Instance` int(11) NOT NULL,
  `Classname` varchar(50) DEFAULT NULL,
  `CharacterID` int(11) NOT NULL DEFAULT '0',
  `Worldspace` varchar(70) NOT NULL DEFAULT '[]',
  `Inventory` longtext,
  `Stage` varchar(1000) NOT NULL DEFAULT '[]',
  `Datestamp` datetime NOT NULL,
  PRIMARY KEY (`ObjectID`),
  UNIQUE KEY `uid` (`ObjectUID`) USING BTREE,
  KEY `ObjectUID` (`ObjectUID`) USING BTREE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of object_homes
-- ----------------------------
