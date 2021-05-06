USE [master]
GO

/****** Object:  Database [EnrollmentSystem]    Script Date: 3/23/2021 7:53:55 PM ******/
CREATE DATABASE [EnrollmentSystem]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'EnrollmentSystem', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL15.MSSQLSERVER2019\MSSQL\DATA\EnrollmentSystem.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'EnrollmentSystem_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL15.MSSQLSERVER2019\MSSQL\DATA\EnrollmentSystem_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT
GO

IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [EnrollmentSystem].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO

ALTER DATABASE [EnrollmentSystem] SET ANSI_NULL_DEFAULT OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET ANSI_NULLS OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET ANSI_PADDING OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET ANSI_WARNINGS OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET ARITHABORT OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET AUTO_CLOSE OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET AUTO_SHRINK OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET AUTO_UPDATE_STATISTICS ON 
GO

ALTER DATABASE [EnrollmentSystem] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET CURSOR_DEFAULT  GLOBAL 
GO

ALTER DATABASE [EnrollmentSystem] SET CONCAT_NULL_YIELDS_NULL OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET NUMERIC_ROUNDABORT OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET QUOTED_IDENTIFIER OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET RECURSIVE_TRIGGERS OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET  DISABLE_BROKER 
GO

ALTER DATABASE [EnrollmentSystem] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET TRUSTWORTHY OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET PARAMETERIZATION SIMPLE 
GO

ALTER DATABASE [EnrollmentSystem] SET READ_COMMITTED_SNAPSHOT OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET HONOR_BROKER_PRIORITY OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET RECOVERY FULL 
GO

ALTER DATABASE [EnrollmentSystem] SET  MULTI_USER 
GO

ALTER DATABASE [EnrollmentSystem] SET PAGE_VERIFY CHECKSUM  
GO

ALTER DATABASE [EnrollmentSystem] SET DB_CHAINING OFF 
GO

ALTER DATABASE [EnrollmentSystem] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO

ALTER DATABASE [EnrollmentSystem] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO

ALTER DATABASE [EnrollmentSystem] SET DELAYED_DURABILITY = DISABLED 
GO

ALTER DATABASE [EnrollmentSystem] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO

ALTER DATABASE [EnrollmentSystem] SET QUERY_STORE = OFF
GO

ALTER DATABASE [EnrollmentSystem] SET  READ_WRITE 
GO

